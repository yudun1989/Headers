//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIImage;

@interface GMSIconDrawStyle : NSObject <NSCopying>
{
    float _opacity;
    UIImage *_icon;
    double _bearing;
    struct CGPoint _anchor;
}

+ (id)styleWithIcon:(id)arg1 anchor:(struct CGPoint)arg2 bearing:(double)arg3 opacity:(float)arg4;
@property(readonly, nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(readonly, nonatomic) double bearing; // @synthesize bearing=_bearing;
@property(readonly, nonatomic) struct CGPoint anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIcon:(id)arg1 anchor:(struct CGPoint)arg2 bearing:(double)arg3 opacity:(float)arg4;
- (id)init;

@end

