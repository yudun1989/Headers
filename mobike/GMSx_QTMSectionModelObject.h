//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol GOOContentViewObject;

@interface GMSx_QTMSectionModelObject : NSObject
{
    NSMutableArray *_itemObjects;
    id <GOOContentViewObject> _headerObject;
    id <GOOContentViewObject> _footerObject;
}

@property(retain, nonatomic) id <GOOContentViewObject> footerObject; // @synthesize footerObject=_footerObject;
@property(retain, nonatomic) id <GOOContentViewObject> headerObject; // @synthesize headerObject=_headerObject;
@property(retain, nonatomic) NSMutableArray *itemObjects; // @synthesize itemObjects=_itemObjects;
- (void).cxx_destruct;
- (id)init;

@end

