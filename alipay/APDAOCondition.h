//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDAOContainerElement.h"

@class NSArray, NSString;

@interface APDAOCondition : APDAOContainerElement
{
    _Bool _evaluateAsTrue;
    unsigned long long _type;
    NSString *_expression;
    NSArray *_tokenList;
}

@property(retain, nonatomic) NSArray *tokenList; // @synthesize tokenList=_tokenList;
@property(retain, nonatomic) NSString *expression; // @synthesize expression=_expression;
@property(nonatomic) _Bool evaluateAsTrue; // @synthesize evaluateAsTrue=_evaluateAsTrue;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithXML:(id)arg1;

@end

