//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PACardDynamicInfoModel : NSObject
{
    long long _pUin;
    long long _lastMsgId;
    NSMutableArray *_msgArray;
}

@property(retain, nonatomic) NSMutableArray *msgArray; // @synthesize msgArray=_msgArray;
@property(nonatomic) long long lastMsgId; // @synthesize lastMsgId=_lastMsgId;
@property(nonatomic) long long pUin; // @synthesize pUin=_pUin;
- (void)dealloc;
- (id)initWithModel:(id)arg1;
- (_Bool)isValidModel;

@end

