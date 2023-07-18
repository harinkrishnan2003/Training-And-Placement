public object SearchElement_Rec(objectelement, TNoderoot)

        {

           current = root;

            if (current == null)

                return "Not found";

            if (Convert.ToInt32(element)== Convert.ToInt32(current.Data))

                return element;

            if (Convert.ToInt32(element)< Convert.ToInt32(current.Data))          

                return this.SearchElement_Rec(element,current.Left);       

            else        

                return this.SearchElement_Rec(element,current.Right);                       

       }
