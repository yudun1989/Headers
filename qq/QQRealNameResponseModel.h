//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QQRealNameAuthTips;

@interface QQRealNameResponseModel : NSObject
{
    _Bool _authenticated;
    _Bool _needAuthTips;
    QQRealNameAuthTips *_authTips;
}

@property(retain, nonatomic) QQRealNameAuthTips *authTips; // @synthesize authTips=_authTips;
@property(nonatomic) _Bool needAuthTips; // @synthesize needAuthTips=_needAuthTips;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
- (void).cxx_destruct;

@end

