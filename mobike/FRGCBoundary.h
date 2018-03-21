//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FRGCBoundaryHeader, FRGCBoundarySectionManager, NSString;

@interface FRGCBoundary : NSObject
{
    FRGCBoundaryHeader *_header;
    NSString *_filePath;
    FRGCBoundarySectionManager *_sectionManager;
}

@property(retain, nonatomic) FRGCBoundarySectionManager *sectionManager; // @synthesize sectionManager=_sectionManager;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) FRGCBoundaryHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)arg1;
- (void)setup;
- (_Bool)sectionID:(id)arg1 containsCoordinate:(struct CLLocationCoordinate2D)arg2;
- (id)constructPolygonWithSection:(id)arg1;

@end

