- Introduction
	- Git is a distributed version control system that tracks versions of files.
	- GitHub is a cloud-based platform where you can store, share, and work together with others to write code.
	- GitLab is the most comprehensive AI-powered DevSecOps Platform.
	- .md files uses Markdown language.[^1]
- Basics
	- Create account and sign in
	- Create new git repository
	- Clone the repository `git clone repo_url`
	- Add changes made in the repository `git add file_name` or `git add .`
	- Check status `git status`
	- Commit changes `git commit -m 'comment'`
	- Push repository using token as password `git push`
	>Note : 
	>- A token must be generated before `git push` and that token will never be visible again (store the token safely forever)


- Heading to create hierarchy level
# Heading form 1 to 6 '#'
###### Just another heading
- Bullet list
	- Sub list in hierarchy
- Reference
	- Link [^2] 
	- Text [^3] 
- Links
	- [[test_file]]
	- https://google.com
- Embedded text ![[test_file]]
- Quoting text
	> Here is Quoted text `Here is quoted code?`
- Quoting code
	```
	Copy Code from here 
	```
- python code
```python
print("Hello, World!")
exit(0)
```
- 

- Text formatting
	- **Bold** __, Bold 2__
	- *Italic* _, Italic 2_
	- ~~Strike through~~
	- log<sub>e</sub>(e<sup>2</sup>)=2
- check boxes
	- [ ] Unchecked box
	- [x] Checked box
- Mermaid Graph [^4]
```mermaid
graph TD
    A[START] -->|Writing| B(Psuedo code)
    B -->|Drawing|C(Flowchart)
    C --> |Analyzing|D{"Is Flowchart\ncorrect?"}
    D -->|Yes| E(Write <br> Code)
    D -->|No|A
    
    E -->|"Execting \n code"| F{"Is output <br> as expected"}
    F --> |Yes|G[STOP]
    F -->|NO| C
```
- GeoJSON map
```geojson
{
  "type": "FeatureCollection",
  "features": [
    {
      "type": "Feature",
      "id": 1,
      "properties": {
        "ID": 0
      },
      "geometry": {
        "type": "Polygon",
        "coordinates": [
          [
			[73.705819 ,18.589174 ],
			[73.705636 ,18.589121 ],
			[73.705655 ,18.589033 ],
			[73.705516 ,18.588992 ],
			[73.705538 ,18.588916 ],
			[73.705423 ,18.588885 ],
			[73.705495 ,18.588640 ],
			[73.705930 ,18.588758 ],
			[73.705819 ,18.589174 ]
          ]
        ]
      }
    }
  ]
}
````
- TopoJSON map
```topojson
{
  "type": "Topology",
  "transform": {
    "scale": [0.0005000500050005, 0.00010001000100010001],
    "translate": [100, 0]
  },
  "objects": {
    "example": {
      "type": "GeometryCollection",
      "geometries": [
        {
          "type": "Point",
          "properties": {"prop0": "value0"},
          "coordinates": [4000, 5000]
        },
        {
          "type": "LineString",
          "properties": {"prop0": "value0", "prop1": 0},
          "arcs": [0]
        },
        {
          "type": "Polygon",
          "properties": {"prop0": "value0",
            "prop1": {"this": "that"}
          },
          "arcs": [[1]]
        }
      ]
    }
  },
  "arcs": [[[4000, 0], [1999, 9999], [2000, -9999], [2000, 9999]],[[0, 0], [0, 9999], [2000, 0], [0, -9999], [-2000, 0]]]
}
```
- 3D model
```stl
solid cube_corner
  facet normal 0.0 -1.0 0.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 1.0 0.0 0.0
      vertex 0.0 0.0 1.0
    endloop
  endfacet
  facet normal 0.0 0.0 -1.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 0.0 1.0 0.0
      vertex 1.0 0.0 0.0
    endloop
  endfacet
  facet normal -1.0 0.0 0.0
    outer loop
      vertex 0.0 0.0 0.0
      vertex 0.0 0.0 1.0
      vertex 0.0 1.0 0.0
    endloop
  endfacet
  facet normal 0.577 0.577 0.577
    outer loop
      vertex 1.0 0.0 0.0
      vertex 0.0 1.0 0.0
      vertex 0.0 0.0 1.0
    endloop
  endfacet
endsolid
```

| hello |      codes |
|:-----:|-----------:|
|  as   |    re \| 3 |
|   3   |          a |

Remember : 
```
git status
git add
git commit
git push
```
[^1]:https://docs.github.com/en/get-started
[^2]: https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax
[^3]: Text
[^4]:https://mermaid.live/edit
<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://user-images.githubusercontent.com/25423296/163456776-7f95b81a-f1ed-45f7-b7ab-8fa810d529fa.png">
  <source media="(prefers-color-scheme: light)" srcset="https://user-images.githubusercontent.com/25423296/163456779-a8556205-d0a5-45e2-ac17-42d089e3c3f8.png">
  <img alt="Shows an illustrated sun in light mode and a moon with stars in dark mode." src="https://user-images.githubusercontent.com/25423296/163456779-a8556205-d0a5-45e2-ac17-42d089e3c3f8.png">
</picture>