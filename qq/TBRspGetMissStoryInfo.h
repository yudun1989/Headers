//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/ITBPBParseData-Protocol.h>

@class NSString, TBErrorInfo;

@interface TBRspGetMissStoryInfo : NSObject <ITBPBParseData>
{
    TBErrorInfo *_error;
    NSString *_word;
}

@property(retain, nonatomic) NSString *word; // @synthesize word=_word;
@property(retain, nonatomic) TBErrorInfo *error; // @synthesize error=_error;
- (void)dealloc;
- (_Bool)parsePBData:(char *)arg1 withLength:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
