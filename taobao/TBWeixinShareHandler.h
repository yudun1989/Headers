//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBBaseShareHandler.h"

@class TBTaoPasswordShareHandler;

@interface TBWeixinShareHandler : TBBaseShareHandler
{
    TBTaoPasswordShareHandler *_taopasswordHandler;
}

@property(retain, nonatomic) TBTaoPasswordShareHandler *taopasswordHandler; // @synthesize taopasswordHandler=_taopasswordHandler;
- (void).cxx_destruct;
- (_Bool)canShare;
- (void)shareToTarget:(id)arg1 withInfo:(id)arg2;

@end

