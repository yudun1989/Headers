//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface QQCampusSchool : NSObject
{
    unsigned long long _schoolId;
    NSString *_name;
    NSString *_desc;
    long long _schoolType;
    struct NSArray *_colleges;
    struct NSArray *_classes;
}

@property(retain, nonatomic) NSArray *classes; // @synthesize classes=_classes;
@property(retain, nonatomic) NSArray *colleges; // @synthesize colleges=_colleges;
@property(nonatomic) long long schoolType; // @synthesize schoolType=_schoolType;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long schoolId; // @synthesize schoolId=_schoolId;
- (void).cxx_destruct;

@end

