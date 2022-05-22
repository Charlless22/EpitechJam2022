var Question = function (questionObj) {
    this.value = {
      text: "Question",
      answers: []
    };
  
    this.selectedAnswer = null;
    this.html = null;
    this.questionText = null;
    this.questionAnswers = null;
    this.questionFeedback = null;
  
    this.value = Object.assign(this.value, questionObj);
  
    this.onQuestionAnswered = ({ detail }) => {
      this.selectedAnswer = {
        value: detail.answer,
        html: detail.answerHtml
      };
      this.update();
  
      document.dispatchEvent(
        new CustomEvent("question-answered", {
          detail: {
            question: this,
            answer: detail.answer
          }
        })
      );
    };
  
    this.create = function () {
      this.html = document.createElement("div");
      this.html.classList.add("question");
  
      this.questionText = document.createElement("h2");
      this.questionText.textContent = this.value.text;
  
      this.questionAnswers = document.createElement("div");
      this.questionAnswers.classList.add("answers");
  
      for (let i = 0; i < this.value.answers.length; i++) {
        const ansObj = this.value.answers[i];
        let answer = createAnswer(ansObj);
  
        answer.onclick = (ev) => {
          if (this.selectedAnswer !== null) {
            this.selectedAnswer.html.classList.remove("selected");
          }
  
          answer.classList.add("selected");
  
          this.html.dispatchEvent(
            new CustomEvent("question-answered", {
              detail: {
                answer: ansObj,
                answerHtml: answer
              }
            })
          );
        };
  
        this.questionAnswers.appendChild(answer);
      }
  
      this.questionFeedback = document.createElement("div");
      this.questionFeedback.classList.add("question-feedback");
  
      this.html.appendChild(this.questionText);
      this.html.appendChild(this.questionAnswers);
      this.html.appendChild(this.questionFeedback);
  
      this.html.addEventListener("question-answered", this.onQuestionAnswered);
  
      return this.html;
    };
  
    this.disable = function () {
      this.html.classList.add("disabled");
      this.html.onclick = (ev) => {
        ev.stopPropagation();
      };
  
      this.html.removeEventListener("question-answered", this.onQuestionAnswered);
  
      let answers = this.html.querySelectorAll(".answer");
      for (let i = 0; i < answers.length; i++) {
        let answer = answers[i];
        answer.onclick = null;
      }
    };
  
    this.remove = function () {
      let children = this.html.querySelectorAll("*");
      for (let i = 0; i < children.length; i++) {
        const child = children[i];
        this.html.removeChild(child);
      }
  
      this.html.removeEventListener("question-answered", this.onQuestionAnswered);
  
      this.html.parentNode.removeChild(this.html);
      this.html = null;
    };
  
    this.update = function () {
      let correctFeedback, incorrectFeedback;
      this.html = this.html || document.createElement("div");
  
      correctFeedback = "Nice! You got it right.";
      incorrectFeedback = "Oh! Not the correct answer.";
  
      if (this.selectedAnswer !== null) {
        if (this.selectedAnswer.value.isCorrect) {
          this.html.classList.add("correct");
          this.html.classList.remove("incorrect");
          this.questionFeedback.innerHTML = correctFeedback;
        } else {
          this.html.classList.add("incorrect");
          this.html.classList.remove("correct");
          this.questionFeedback.innerHTML = incorrectFeedback;
        }
      }
    };
  
    function createAnswer(obj) {
      this.value = {
        text: "Answer",
        isCorrect: false
      };
  
      this.value = Object.assign(this.value, obj);
  
      this.html = document.createElement("button");
      this.html.classList.add("answer");
  
      this.html.textContent = this.value.text;
  
      return this.html;
    }
  };
  
  //
  // main.js
  //
  
  let questionsData = [
    {
      text: "Comment se nomme la fille intello de la famille simpson ?",
      answers: [
        {
          text: "Apu",
          isCorrect: false
        },
        {
          text: "Lisa",
          isCorrect: true
        },
        {
          text: "Marge",
          isCorrect: false
        },
        {
          text: "Joe",
          isCorrect: false
        }
      ]
    },
    {
      text: "Comment se nomme le farceur de la famille Simpson ?",
      answers: [
        {
          text: "Bart",
          isCorrect: true
        },
        {
          text: "Kenny",
          isCorrect: false
        },
        {
          text: "Jaoued",
          isCorrect: false
        },
        {
          text: "Amixem",
          isCorrect: false
        }
      ]
    },
    {
      text: "Comment se nomme le pere de la famille Simpson ?",
      answers: [
        {
          text: "Samuel",
          isCorrect: false
        },
        {
          text: 'Papacito',
          isCorrect: false
        },
        {
          text: "Homer",
          isCorrect: true
        },
        {
          text: "Smiters",
          isCorrect: false
        }
      ]
    },
    {
      text: "Comment se nomme la mere de la famille Simpson ?",
      answers: [
        {
          text: "Marge",
          isCorrect: true
        },
        {
          text: "Nasdas",
          isCorrect: false
        },
        {
          text: "Fatima",
          isCorrect: false
        },
        {
          text: "Ayoub",
          isCorrect: false
        }
      ]
    },
    {
      text: "Comment se nomme le bebe de la famille Simpson ?",
      answers: [
        {
          text: "Maggy",
          isCorrect: true
        },
        {
          text: "EricLeZ",
          isCorrect: false
        },
        {
          text: "IshowSpeed",
          isCorrect: false
        },
        {
          text: "Voiture",
          isCorrect: false
        }
      ]
    },
    {
      text: "Quel est le nom de Bart ?",
      answers: [
        {
          text: "Bartholomew",
          isCorrect: true
        },
        {
          text: "Naruto",
          isCorrect: false
        },
        {
          text: "John",
          isCorrect: false
        },
        {
          text: "Bartholomiaou",
          isCorrect: false
        }
      ]
    },
    {
      text: "Quel est le nom complet de Maggie ?",
      answers: [
        {
          text: "Bartholomew",
          isCorrect: false
        },
        {
          text: "Margaret Eve",
          isCorrect: true
        },
        {
          text: "Pablo",
          isCorrect: false
        },
        {
          text: "Zizou",
          isCorrect: false
        }
      ]
    },
    {
      text: "Qui est le meilleur ami de Bart ?",
      answers: [
        {
          text: "Milhouse",
          isCorrect: true
        },
        {
          text: "Toulouse",
          isCorrect: false
        },
        {
          text: "Pedro",
          isCorrect: false
        },
        {
          text: "Lisa",
          isCorrect: false
        }
      ]
    },
    {
      text: "Ou travaille Homer ?",
      answers: [
        {
          text: "Monoprix",
          isCorrect: false
        },
        {
          text: "Pole emploie",
          isCorrect: false
        },
        {
          text: "Centrale nucleaire de springfield",
          isCorrect: true
        },
        {
          text: "Epitech",
          isCorrect: false
        }
      ]
    },
    {
      text: "Marge etait elle flic ?",
      answers: [
        {
          text: "Non",
          isCorrect: false
        },
        {
          text: "La place",
          isCorrect: false
        },
        {
          text: "Oui",
          isCorrect: true
        },
        {
          text: "Peut etre",
          isCorrect: false
        }
      ]
    }
  ];

  // variables initialization
  let questions = [];
  let score = 0,
    answeredQuestions = 0;
  let appContainer = document.getElementById("questions-container");
  let scoreContainer = document.getElementById("score-container");
  scoreContainer.innerHTML = `Score: ${score}/${questionsData.length}`;
  
  /**
   * Shuffles array in place. ES6 version
   * @param {Array} arr items An array containing the items.
   */
  function shuffle(arr) {
    for (let i = arr.length - 1; i > 0; i--) {
      const j = Math.floor(Math.random() * (i + 1));
      [arr[i], arr[j]] = [arr[j], arr[i]];
    }
  }
  
  shuffle(questionsData);
  
  // creating questions
  for (var i = 0; i < questionsData.length; i++) {
    let question = new Question({
      text: questionsData[i].text,
      answers: questionsData[i].answers
    });
  
    appContainer.appendChild(question.create());
    questions.push(question);
  }
  
  document.addEventListener("question-answered", ({ detail }) => {
    if (detail.answer.isCorrect) {
      score++;
    }
  
    answeredQuestions++;
    scoreContainer.innerHTML = `Score: ${score}/${questions.length}`;
    detail.question.disable();
  
    if (answeredQuestions == questions.length) {
      setTimeout(function () {
        alert(`Quiz completed! \nFinal score: ${score}/${questions.length}`);
      }, 100);
    }
  });
  
  console.log(questions, questionsData);
  