// library
module R = {
  include React;
  let s = React.string;
};
// component
module Header = {
  [@react.component]
  let make = (~path: string) => {
    <h1> {R.s @@ "Index of " ++ path} </h1>;
  };
};

module Error = {
  [@react.component]
  let make = () => <h1> {R.s @@ "404 Not Found!!"} </h1>;
};

module AboutMe = {
  [@react.component]
  let make = () => {
    <Header path="/miya-lis/aboutme" />;
  };
};

// module DirList = {
//   [@react.component]
//   let make = (~title: string, ~complst: 'a list) => {
//     <>
//       <Header
//     </>
//   };
// };

// router
module Router = {
  [@react.component]
  let make = () => {
    <Error />;
  };
};
let node = ReactDOM.querySelector("#root");
switch (node) {
| None =>
  Js.Console.error("Failed to start React: couldn't find the #root element")
| Some(root) =>
  let root = ReactDOM.Client.createRoot(root);
  Js.log(ReasonReactRouter.dangerouslyGetInitialUrl);
  ReactDOM.Client.render(root, <Router />);
};
