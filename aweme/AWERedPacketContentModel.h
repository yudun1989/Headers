//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEShareModel, AWEURLModel, NSString;

@interface AWERedPacketContentModel : AWEBaseApiModel
{
    _Bool _received;
    unsigned long long _type;
    long long _money;
    AWEURLModel *_iconURL;
    AWEURLModel *_starIconURL;
    NSString *_shareName;
    NSString *_activityURLString;
    AWEShareModel *_shareModel;
    NSString *_shareItemID;
}

+ (id)shareModelJSONTransformer;
+ (id)starIconURLJSONTransformer;
+ (id)iconURLJSONTransformer;
+ (id)redPacketTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *shareItemID; // @synthesize shareItemID=_shareItemID;
@property(retain, nonatomic) AWEShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) NSString *activityURLString; // @synthesize activityURLString=_activityURLString;
@property(retain, nonatomic) NSString *shareName; // @synthesize shareName=_shareName;
@property(retain, nonatomic) AWEURLModel *starIconURL; // @synthesize starIconURL=_starIconURL;
@property(retain, nonatomic) AWEURLModel *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) long long money; // @synthesize money=_money;
@property(nonatomic) _Bool received; // @synthesize received=_received;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

