//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CustomCardDIYInfo : NSObject
{
    int _fontId;
    float _rotateAngle;
    float _scale;
    float _alpha;
    NSString *_text;
    NSString *_centerPoint;
}

@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float rotateAngle; // @synthesize rotateAngle=_rotateAngle;
@property(copy, nonatomic) NSString *centerPoint; // @synthesize centerPoint=_centerPoint;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) int fontId; // @synthesize fontId=_fontId;
- (id)description;
- (void)dealloc;
- (struct CGPoint)center;
- (id)init;

@end

