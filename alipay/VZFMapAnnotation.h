//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPointAnnotation.h>

#import "MKAnnotation-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, UIImage;

@interface VZFMapAnnotation : MKPointAnnotation <MKAnnotation, NSCopying>
{
    _Bool _hasLeftCallout;
    _Bool _hasRightCallout;
    _Bool _animateDrop;
    _Bool _draggable;
    NSString *_identifier;
    UIImage *_image;
}

+ (id)newWithAnnotationSpecs:(const struct MapAnnotationSpecs *)arg1;
@property(nonatomic) _Bool draggable; // @synthesize draggable=_draggable;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool animateDrop; // @synthesize animateDrop=_animateDrop;
@property(nonatomic) _Bool hasRightCallout; // @synthesize hasRightCallout=_hasRightCallout;
@property(nonatomic) _Bool hasLeftCallout; // @synthesize hasLeftCallout=_hasLeftCallout;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

