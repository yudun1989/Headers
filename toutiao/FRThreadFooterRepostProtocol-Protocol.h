//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class FRCommonUserStructModel, FRFooterRepostStructModel, NSArray, NSDictionary, NSNumber, NSString;
@protocol FRActionDataProtocol, FRThreadFooterRepostProtocol;

@protocol FRThreadFooterRepostProtocol <NSObject, NSCopying>
+ (id <FRThreadFooterRepostProtocol>)createFooterRepostModelWithCommentDictionary:(NSDictionary *)arg1;
+ (id <FRThreadFooterRepostProtocol>)createFooterRepostModelWithCommentRepostDictionary:(NSDictionary *)arg1;
+ (id <FRThreadFooterRepostProtocol>)createFooterRepostModelWithThreadDictionary:(NSDictionary *)arg1;
@property(nonatomic) _Bool isUnFold;
@property(nonatomic) _Bool isStick;
@property(retain, nonatomic) NSArray *authBadgeList;
@property(retain, nonatomic) id <FRActionDataProtocol> actionDataModel;
@property(retain, nonatomic) FRCommonUserStructModel *userModel;
@property(retain, nonatomic) NSNumber *repostCreateTime;
@property(retain, nonatomic) NSString *detailSchema;
@property(nonatomic) _Bool isAuthor;
@property(retain, nonatomic) NSString *contentRichSpan;
@property(retain, nonatomic) NSString *content;
@property(nonatomic) long long repostOriginType;
@property(retain, nonatomic) NSString *repostID;
- (id)initWithFooterRepostModel:(FRFooterRepostStructModel *)arg1;
@end

