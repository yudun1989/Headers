//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSArray, NSString;

@interface mobilerelationAllFriendsResult : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) long long deleteVersion; // @dynamic deleteVersion;
@property(retain, nonatomic) NSArray *deletedIds; // @dynamic deletedIds;
@property(nonatomic) long long extVersion; // @dynamic extVersion;
@property(nonatomic) _Bool fullDose; // @dynamic fullDose;
@property(readonly) _Bool hasDeleteVersion; // @dynamic hasDeleteVersion;
@property(readonly) _Bool hasExtVersion; // @dynamic hasExtVersion;
@property(readonly) _Bool hasFullDose; // @dynamic hasFullDose;
@property(readonly) _Bool hasIndex; // @dynamic hasIndex;
@property(readonly) _Bool hasLastGetDatasTime; // @dynamic hasLastGetDatasTime;
@property(readonly) _Bool hasOpen; // @dynamic hasOpen;
@property(readonly) _Bool hasResultCode; // @dynamic hasResultCode;
@property(readonly) _Bool hasResultDesc; // @dynamic hasResultDesc;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(readonly) _Bool hasSyncMaxOpId; // @dynamic hasSyncMaxOpId;
@property(readonly) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) NSString *index; // @dynamic index;
@property(nonatomic) long long lastGetDatasTime; // @dynamic lastGetDatasTime;
@property(nonatomic) _Bool open; // @dynamic open;
@property(nonatomic) int resultCode; // @dynamic resultCode;
@property(retain, nonatomic) NSString *resultDesc; // @dynamic resultDesc;
@property(retain, nonatomic) NSArray *resultList; // @dynamic resultList;
@property(nonatomic) _Bool success; // @dynamic success;
@property(retain, nonatomic) NSString *syncMaxOpId; // @dynamic syncMaxOpId;
@property(retain, nonatomic) NSArray *tagGroups; // @dynamic tagGroups;
@property(nonatomic) long long version; // @dynamic version;
@property(retain, nonatomic) NSArray *welcomeList; // @dynamic welcomeList;

@end
