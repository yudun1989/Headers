//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSNumber, NSString;

@interface MBKStudentCertificationRequest : MBKMobikeRequest
{
    NSString *_student_id;
    NSString *_student_name;
    NSString *_schoolName;
    NSString *_imgone;
    NSString *_imgtwo;
    NSNumber *_tag;
    NSString *_schoolCode;
}

@property(copy, nonatomic) NSString *schoolCode; // @synthesize schoolCode=_schoolCode;
@property(nonatomic) NSNumber *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *imgtwo; // @synthesize imgtwo=_imgtwo;
@property(copy, nonatomic) NSString *imgone; // @synthesize imgone=_imgone;
@property(copy, nonatomic) NSString *schoolName; // @synthesize schoolName=_schoolName;
@property(copy, nonatomic) NSString *student_name; // @synthesize student_name=_student_name;
@property(copy, nonatomic) NSString *student_id; // @synthesize student_id=_student_id;
- (void).cxx_destruct;
- (id)init;

@end
