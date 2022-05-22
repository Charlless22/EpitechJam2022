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
  
      correctFeedback = "Bien jouer ! C'est la bonne reponse.";
      incorrectFeedback = "Dommage c'etait pas le bonne réponse";
  
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
      text: "Quel est le nom de la reine actuelle ?",
      answers: [
        {
          text: "Élisabeth II",
          isCorrect: true
        },
        {
          text: "Élisabeth IIII",
          isCorrect: false
        },
        {
          text: "Élisabeth 1000",
          isCorrect: false
        },
        {
          text: "Élisabeth",
          isCorrect: false
        },
      ]
    },
    {
      text: "De quelle famille, la reine actuelle appartient-elle ?",
      answers: [
        {
          text: "Windsor",
          isCorrect: true
        },
        {
          text: "Windsore",
          isCorrect: false
        },
        {
          text: "  Windsoro",
          isCorrect: false
        },
        {
          text: "  Windsora",
          isCorrect: false
        }
      ]
    },
    {
      text: "Quelle personnalité de la famille royale britannique meurt dans un accident suspect de voiture ?",
      answers: [
        {
          text: "Princesse Diana",
          isCorrect: true
        },
        {
          text: "Princesse Diona",
          isCorrect: false
        },
        {
          text: "Princesse Diama",
          isCorrect: false
        },
        {
          text: "Princesse Dyana",
          isCorrect: false
        }
      ]
    },
    {
      text: "Où habite la reine à Londres ?",
      answers: [
        {
          text: "Buckingham Palace",
          isCorrect: true
        },
        {
          text: "Buckingham Place",
          isCorrect: false
        },
        {
          text: "Buckimghan Palace",
          isCorrect: false
        },
        {
          text: "Buckingha Pace",
          isCorrect: false
        }
      ]
    },
    {
      text: "Qui est le second en ligne pour le trône ?",
      answers: [
        {
          text: "Prince Charles",
          isCorrect: true
        },
        {
          text: "Primce Charle",
          isCorrect: false
        },
        {
          text: "Prince Chat",
          isCorrect: false
        },
        {
          text: "Prince Charl",
          isCorrect: false
        },
      ]
    },
    {
      text: "Quel membre de la famille royale était rebelle lors de son enfance ?",
      answers: [
        {
          text: "Prince Harry",
          isCorrect: true
        },
        {
          text: "Prince Hary",
          isCorrect: false
        },
        {
          text: "Prince Harro",
          isCorrect: false
        },
        {
          text: "Prince Harra",
          isCorrect: false
        }
      ]
    },
    {
      text: "À quelle église la famille royale est-elle liée ?",
      answers: [
        {
          text: "Église anglicame",
          isCorrect: false
        },
        {
          text: "Église anglicane",
          isCorrect: true
        },
        {
          text: "Église anglicano",
          isCorrect: false
        },
        {
          text: "Église anglicana",
          isCorrect: false
        }
      ]
    },
    {
      text: "Combien d’enfants ont le Prince William et Kate Middleton ?",
      answers: [
        {
          text: "Deux",
          isCorrect: true
        },
        {
          text: "Quatre",
          isCorrect: false
        },
        {
          text: "Un",
          isCorrect: false
        },
        {
          text: "Trois",
          isCorrect: false
        }
      ]
    },
    {
      text: "Qui est le monarque ayant régné le plus longtemps ?",
      answers: [
        {
          text: "Macron",
          isCorrect: false
        },
        {
          text: "Prince Harry",
          isCorrect: false
        },
        {
          text: "Reine Élisabeth II",
          isCorrect: true
        },
        {
          text: "Brigitte Macron",
          isCorrect: false
        }
      ]
    },
    {
      text: "La reine Élisabeth II a des origines _ ?",
      answers: [
        {
          text: "Espagnoles",
          isCorrect: false
        },
        {
          text: "Allemandes",
          isCorrect: true
        },
        {
          text: "Italinnes",
          isCorrect: false
        },
        {
          text: "Congolaises",
          isCorrect: false
        },
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
