SOURCEDIR = $(shell find . -type d ! -name ".")

.PHONY:install
install:$(SOURCEDIR)
	for mdir in $^; do [ -d $$mdir ] && cd $$mdir && $(MAKE) depend all install && cd ..; done

.PHONY:clean
clean:
	for mdir in $(SOURCEDIR); do [ -d $$mdir ] && cd $$mdir && $(MAKE) $@ && cd ..; done
