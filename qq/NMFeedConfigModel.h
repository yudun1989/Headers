//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSString;

@interface NMFeedConfigModel : QQModel
{
    unsigned int _charm;
    unsigned int _charmLevel;
    long long _publishMinLevel;
    NSString *_publishLabelTips;
    NSString *_unablePublishWarningTips;
    long long _publishCommentMinLeval;
    NSString *_unablePublishCommentWarningTips;
    int _xo;
}

+ (_Bool)isExistNMFeedConfig;
+ (void)saveConfigWithNMFeedConfigModel:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)asyncSave;
- (id)cacheFilePath;
- (void)initMemberWithFilePath:(id)arg1;
- (id)initWithLoadCache;

// Remaining properties
@property(nonatomic) unsigned int charm; // @dynamic charm;
@property(nonatomic) unsigned int charmLevel; // @dynamic charmLevel;
@property(nonatomic) long long publishCommentMinLeval; // @dynamic publishCommentMinLeval;
@property(retain, nonatomic) NSString *publishLabelTips; // @dynamic publishLabelTips;
@property(nonatomic) long long publishMinLevel; // @dynamic publishMinLevel;
@property(retain, nonatomic) NSString *unablePublishCommentWarningTips; // @dynamic unablePublishCommentWarningTips;
@property(retain, nonatomic) NSString *unablePublishWarningTips; // @dynamic unablePublishWarningTips;

@end

