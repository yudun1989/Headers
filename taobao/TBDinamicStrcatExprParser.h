//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBDinamicDataParsePattern-Protocol.h"

@class NSString, TBDinamicDataParsePatternData;

@interface TBDinamicStrcatExprParser : NSObject <TBDinamicDataParsePattern>
{
    TBDinamicDataParsePatternData *_dataParser;
}

+ (id)prefixName;
@property(retain, nonatomic) TBDinamicDataParsePatternData *dataParser; // @synthesize dataParser=_dataParser;
- (void).cxx_destruct;
- (id)parseExpression:(id)arg1 withDataDict:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

