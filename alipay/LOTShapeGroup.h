//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface LOTShapeGroup : NSObject
{
    NSArray *_items;
}

+ (id)shapeItemWithJSON:(id)arg1 frameRate:(id)arg2 compBounds:(struct CGRect)arg3;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)description;
- (void)_mapFromJSON:(id)arg1 frameRate:(id)arg2 compBounds:(struct CGRect)arg3;
- (id)initWithJSON:(id)arg1 frameRate:(id)arg2 compBounds:(struct CGRect)arg3;

@end

