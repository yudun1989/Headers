//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber, NSString;

@interface KDIcImageStructModel : WDBaseModel
{
    NSString *_small_img;
    NSString *_medium_img;
    NSNumber *_img_id;
}

@property(retain, nonatomic) NSNumber *img_id; // @synthesize img_id=_img_id;
@property(retain, nonatomic) NSString *medium_img; // @synthesize medium_img=_medium_img;
@property(retain, nonatomic) NSString *small_img; // @synthesize small_img=_small_img;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

