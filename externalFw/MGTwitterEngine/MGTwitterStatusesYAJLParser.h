//
//  MGTwitterStatusesYAJLParser.h
//  MGTwitterEngine
//
//  Created by Matt Gemmell on 11/02/2008.
//  Copyright 2008 Instinctive Code.
//

#import "MGTwitterEngineGlobalHeader.h"

#import "MGTwitterYAJLParser.h"

@interface MGTwitterStatusesYAJLParser : MGTwitterYAJLParser {
	NSMutableArray *_dictionaries; // effectively a stack for parsing nested dictionaries
	NSMutableArray *_dictionaryKeys;
}

@end