//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQCreateGroupPbProxy : NSObject
{
}

+ (id)shareInstance;
- (id)parseDiscussToGroupRsp:(char *)arg1 len:(int)arg2;
- (id)getDiscussConvertToGroupOIDBSSOPKG:(unsigned long long)arg1;
- (id)parseCreateGroupRsp:(char *)arg1 len:(int)arg2 subcmd:(unsigned int)arg3;
- (id)getCheckCreateGroupInfoOIDBSSOPKG:(unsigned long long)arg1 serviceType:(unsigned int)arg2 subcmd:(unsigned int)arg3;
- (id)getCreateGroupOIDBSSOPKG:(id)arg1 sign:(id)arg2;
- (id)oidbSSOPKG:(basic_string_075b6133)arg1 command:(unsigned int)arg2 serviceType:(unsigned int)arg3;
- (id)getDiscussToGroupSSOPKG:(basic_string_075b6133)arg1;
- (id)getOIDBSSOPKG:(basic_string_075b6133)arg1;

@end
