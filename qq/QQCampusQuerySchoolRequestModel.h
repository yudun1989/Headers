//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QQCampusQuerySchoolRequestModel : NSObject
{
    _Bool _queryClasses;
    NSString *_name;
    unsigned long long _schoolId;
    long long _schoolType;
}

@property(nonatomic) _Bool queryClasses; // @synthesize queryClasses=_queryClasses;
@property(nonatomic) long long schoolType; // @synthesize schoolType=_schoolType;
@property(nonatomic) unsigned long long schoolId; // @synthesize schoolId=_schoolId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

