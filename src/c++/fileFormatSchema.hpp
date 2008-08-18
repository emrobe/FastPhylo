#ifndef FILEFORMATSCHEMA_HPP
#define FILEFORMATSCHEMA_HPP


static const char fastphylo_sequence_xml_relaxngstr[] = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"
"<grammar xmlns=\"http://relaxng.org/ns/structure/1.0\" datatypeLibrary=\"http://www.w3.org/2001/XMLSchema-datatypes\">\n"
"  <start>\n"
"    <element name=\"root\">\n"
"      <element name=\"runs\">\n"
"        <zeroOrMore>\n"
"          <element name=\"run\">\n"
"            <attribute name=\"id\">\n"
"              <text/>\n"
"            </attribute>\n"
"            <oneOrMore>\n"
"              <element name=\"seq\">\n"
"                <attribute name=\"seq\">\n"
"                  <data type=\"string\">\n"
"                    <param name=\"pattern\">[acgtumrwsykvhdbnxACGTUMRWSYKVHDBNX -.?]+</param>\n"
"                  </data>\n"
"                </attribute>\n"
"                <attribute name=\"name\">\n"
"                  <text/>\n"
"                </attribute>\n"
"                <optional>\n"
"                  <element name=\"extrainfo\">\n"
"                    <ref name=\"anyContent\"/>\n"
"                  </element>\n"
"                </optional>\n"
"              </element>\n"
"            </oneOrMore>\n"
"          </element>\n"
"        </zeroOrMore>\n"
"      </element>\n"
"    </element>\n"
"  </start>\n"
"  <define name=\"anyContent\">\n"
"    <mixed>\n"
"      <zeroOrMore>\n"
"        <choice>\n"
"          <attribute>\n"
"            <anyName/>\n"
"          </attribute>\n"
"          <ref name=\"anyElement\"/>\n"
"        </choice>\n"
"      </zeroOrMore>\n"
"    </mixed>\n"
"  </define>\n"
"  <define name=\"anyElement\">\n"
"    <element>\n"
"      <anyName/>\n"
"      <ref name=\"anyContent\"/>\n"
"    </element>\n"
"  </define>\n"
"</grammar>\n";



static const char fastphylo_distance_matrix_xml_relaxngstr[] = "<?xml version=\"1.0\"?>\n"
"<grammar xmlns=\"http://relaxng.org/ns/structure/1.0\" datatypeLibrary=\"http://www.w3.org/2001/XMLSchema-datatypes\">\n"
"  <start>\n"
"    <element name=\"root\">\n"
"      <element name=\"runs\">\n"
"        <zeroOrMore>\n"
"          <element name=\"run\">\n"
"            <attribute name=\"dim\">\n"
"              <data type=\"integer\"/>\n"
"            </attribute>\n"
"            <attribute name=\"id\">\n"
"              <text/>\n"
"            </attribute>\n"
"            <element name=\"identities\">\n"
"              <oneOrMore>\n"
"                <element name=\"identity\">\n"
"                  <attribute name=\"name\">\n"
"                    <text/>\n"
"                  </attribute>\n"
"                  <optional>\n"
"                    <element name=\"extrainfo\">\n"
"                      <ref name=\"anyContent\"/>\n"
"                    </element>\n"
"                  </optional>\n"
"                </element>\n"
"              </oneOrMore>\n"
"            </element>\n"
"            <element name=\"dms\">\n"
"              <oneOrMore>\n"
"                <element name=\"dm\">\n"
"                  <oneOrMore>\n"
"                    <element name=\"row\">\n"
"                      <oneOrMore>\n"
"                        <element name=\"entry\">\n"
"                          <data type=\"float\"/>\n"
"                        </element>\n"
"                      </oneOrMore>\n"
"                    </element>\n"
"                  </oneOrMore>\n"
"                </element>\n"
"              </oneOrMore>\n"
"            </element>\n"
"          </element>\n"
"        </zeroOrMore>\n"
"      </element>\n"
"    </element>\n"
"  </start>\n"
"  <define name=\"anyContent\">\n"
"    <mixed>\n"
"      <zeroOrMore>\n"
"        <choice>\n"
"          <attribute>\n"
"            <anyName/>\n"
"          </attribute>\n"
"          <ref name=\"anyElement\"/>\n"
"        </choice>\n"
"      </zeroOrMore>\n"
"    </mixed>\n"
"  </define>\n"
"  <define name=\"anyElement\">\n"
"    <element>\n"
"      <anyName/>\n"
"      <ref name=\"anyContent\"/>\n"
"    </element>\n"
"  </define>\n"
  "</grammar>\n";


static const char fastphylo_tree_count_xml_relaxngstr[] = "<?xml version=\"1.0\"?>\n"
"<grammar xmlns=\"http://relaxng.org/ns/structure/1.0\" datatypeLibrary=\"http://www.w3.org/2001/XMLSchema-datatypes\">\n"
"  <start>\n"
"    <element name=\"root\">\n"
"      <element name=\"runs\">\n"
"        <zeroOrMore>\n"
"          <element name=\"run\">\n"
"            <attribute name=\"dim\">\n"
"              <data type=\"integer\"/>\n"
"            </attribute>\n"
"            <element name=\"identities\">\n"
"              <oneOrMore>\n"
"                <element name=\"identity\">\n"
"                  <attribute name=\"name\">\n"
"                    <text/>\n"
"                  </attribute>\n"
"                  <optional>\n"
"                    <element name=\"extrainfo\">\n"
"                      <ref name=\"anyContent\"/>\n"
"                    </element>\n"
"                  </optional>\n"
"                </element>\n"
"              </oneOrMore>\n"
"            </element>\n"
"            <element name=\"tree\">\n"
"              <element name=\"count\">\n"
"                <data type=\"integer\"/>\n"
"              </element>\n"
"              <element name=\"newick-xml\">\n"
"                <ref name=\"branch\"/>\n"
"              </element>\n"
"              <element name=\"newick\">\n"
"                <text/>\n"
"              </element>\n"
"            </element>\n"
"          </element>\n"
"        </zeroOrMore>\n"
"      </element>\n"
"    </element>\n"
"  </start>\n"
"  <define name=\"anyContent\">\n"
"    <mixed>\n"
"      <zeroOrMore>\n"
"        <choice>\n"
"          <attribute>\n"
"            <anyName/>\n"
"          </attribute>\n"
"          <ref name=\"anyElement\"/>\n"
"        </choice>\n"
"      </zeroOrMore>\n"
"    </mixed>\n"
"  </define>\n"
"  <define name=\"anyElement\">\n"
"    <element>\n"
"      <anyName/>\n"
"      <ref name=\"anyContent\"/>\n"
"    </element>\n"
"  </define>\n"
"  <define name=\"branch\">\n"
"    <element name=\"branch\">\n"
"      <oneOrMore>\n"
"        <choice>\n"
"          <element name=\"leaf\">\n"
"            <text/>\n"
"          </element>\n"
"          <ref name=\"branch\"/>\n"
"        </choice>\n"
"      </oneOrMore>\n"
"    </element>\n"
"  </define>\n"
"</grammar>\n";



#endif // FILEFORMATSCHEMA_HPP
