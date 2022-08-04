
import {BrowserRouter, Routes,Route} from 'react-router-dom';

import { Navbar} from './components/navbar';

import { Home } from './pages/Home';
import { Hostellisting } from './pages/Hostellisting';
import { Loginform } from './pages/Loginform';
import { Signupform } from './pages/Signupform';





function App() {
  return (

    <div className="App">
    
    <BrowserRouter>
   <Navbar></Navbar>
  
      <Routes>
        <Route
        path="/"
        element={<Home/>}/>
        <Route path="/signup" element={<Signupform/>}/>
        <Route path="/login" element={<Loginform/>}/>
        <Route path="/listing" element={<Hostellisting/>}/>
      </Routes>
    
    </BrowserRouter>

  </div>

   );
}

export default App;
