//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/NSCopying-Protocol.h>

@class NSString;

@interface QDGroupModel : NSObject <NSCopying>
{
    unsigned int _groupLevel;
    unsigned long long _groupId;
    NSString *_groupName;
}

@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) unsigned int groupLevel; // @synthesize groupLevel=_groupLevel;
@property(nonatomic) unsigned long long groupId; // @synthesize groupId=_groupId;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

