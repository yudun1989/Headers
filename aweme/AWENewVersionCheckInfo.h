//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber, NSString;

@interface AWENewVersionCheckInfo : AWEBaseApiModel
{
    _Bool _forceUpdate;
    NSString *_statusMessage;
    NSString *_tipsVersionName;
    NSNumber *_tipsVersionCode;
    NSString *_realVersionName;
    NSNumber *_realVersionCode;
    NSString *_whatsNew;
    NSString *_title;
    NSString *_downloadURL;
    NSString *_verboseName;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool forceUpdate; // @synthesize forceUpdate=_forceUpdate;
@property(retain, nonatomic) NSString *verboseName; // @synthesize verboseName=_verboseName;
@property(retain, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *whatsNew; // @synthesize whatsNew=_whatsNew;
@property(retain, nonatomic) NSNumber *realVersionCode; // @synthesize realVersionCode=_realVersionCode;
@property(retain, nonatomic) NSString *realVersionName; // @synthesize realVersionName=_realVersionName;
@property(retain, nonatomic) NSNumber *tipsVersionCode; // @synthesize tipsVersionCode=_tipsVersionCode;
@property(retain, nonatomic) NSString *tipsVersionName; // @synthesize tipsVersionName=_tipsVersionName;
@property(retain, nonatomic) NSString *statusMessage; // @synthesize statusMessage=_statusMessage;
- (void).cxx_destruct;

@end

