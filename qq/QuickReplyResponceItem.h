//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface QuickReplyResponceItem : NSObject
{
    int _seq;
    _Bool _isSuccess;
    NSDictionary *_successDic;
}

@property(retain, nonatomic) NSDictionary *successDic; // @synthesize successDic=_successDic;
@property(nonatomic) _Bool isSuccess; // @synthesize isSuccess=_isSuccess;
@property(nonatomic) int seq; // @synthesize seq=_seq;
- (void)dealloc;
- (id)initWithSeq:(int)arg1 isSuccess:(_Bool)arg2;

@end

