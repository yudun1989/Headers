//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKMobikeRequest.h"

@class NSString;

@interface MBKIDCheckRequest : MBKMobikeRequest
{
    NSString *_idcard_name;
    NSString *_idcard_number;
    NSString *_nation;
    NSString *_imgone;
    NSString *_imgtwo;
}

@property(copy, nonatomic) NSString *imgtwo; // @synthesize imgtwo=_imgtwo;
@property(copy, nonatomic) NSString *imgone; // @synthesize imgone=_imgone;
@property(copy, nonatomic) NSString *nation; // @synthesize nation=_nation;
@property(copy, nonatomic) NSString *idcard_number; // @synthesize idcard_number=_idcard_number;
@property(copy, nonatomic) NSString *idcard_name; // @synthesize idcard_name=_idcard_name;
- (void).cxx_destruct;
- (id)init;

@end

