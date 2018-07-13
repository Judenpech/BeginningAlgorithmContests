class Solution:
    def subdomainVisits(self, cpdomains):
        """
        :type cpdomains: List[str]
        :rtype: List[str]
        """
        domain = {}
        for d in cpdomains:
            l = d.split()
            v = int(l[0])
            begin = 0
            l[1] = " " + l[1]
            while begin != -1:
                key = l[1][begin + 1:]
                domain[key] = domain.get(key, 0) + v
                begin = l[1].find('.', begin + 1)
        ret = []
        for k in domain.keys():
            ret.append(str(domain[k]) + " " + str(k))
        return ret