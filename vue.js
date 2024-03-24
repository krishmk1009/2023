<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Vue Js</title>
    <script src="https://unpkg.com/vue@3/dist/vue.global.js"></script>
  </head>
  <body>
    <div id="nav">

<ul>
    <li v-for="link in links"> {{link}}</li>
</ul>

    </div>
    <div id="content">


      <h1>{{heading}}</h1>
    </div>

    <script>
        Vue.createApp({
            data(){

                return {

                    links  : ["home" , "about" , "contact"]
                }
            }
        }).mount("#nav")

      Vue.createApp({
        data() {
          return {
            heading: "hello i am Vue",
          };
        },
      }).mount("#content");
    </script>
  </body>
</html>
