//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZBaseJob.h>

@class NSArray, NSDictionary, NSString;

@interface QZForwardPhotoToGroupJob : QZBaseJob
{
}

+ (id)operationWithJob:(id)arg1;
- (_Bool)persistent;

// Remaining properties
@property(copy, nonatomic) NSArray *URLs; // @dynamic URLs;
@property(copy, nonatomic) NSString *albumDescription; // @dynamic albumDescription;
@property(copy, nonatomic) NSString *albumID; // @dynamic albumID;
@property(copy, nonatomic) NSString *albumName; // @dynamic albumName;
@property(nonatomic) long long batchID; // @dynamic batchID;
@property(nonatomic) long long groupCode; // @dynamic groupCode;
@property(copy, nonatomic) NSDictionary *mapExt; // @dynamic mapExt;
@property(nonatomic) long long ownerUIN; // @dynamic ownerUIN;

@end

