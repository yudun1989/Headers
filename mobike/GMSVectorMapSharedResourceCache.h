//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSVectorMapSharedResources;

@interface GMSVectorMapSharedResourceCache : NSObject
{
    struct map<std::__1::basic_string<char>, gmscore::base::reffed_ptr<gmscore::vector::GMSGeneratedTextureAtlas>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, gmscore::base::reffed_ptr<gmscore::vector::GMSGeneratedTextureAtlas>>>> _nameToTextureAtlas;
    GMSVectorMapSharedResources *_resources;
}

@property(readonly, nonatomic) GMSVectorMapSharedResources *resources; // @synthesize resources=_resources;
- (id).cxx_construct;
- (void).cxx_destruct;
- (reffed_ptr_eca42765)textureAtlasForName:(const basic_string_a490aa4c *)arg1 scale:(double)arg2 atlas1x:(const struct GMSTextureAtlas *)arg3 atlas2x:(const struct GMSTextureAtlas *)arg4 atlas3x:(const struct GMSTextureAtlas *)arg5;
- (vector_8e13786b)spritesForScale:(double)arg1;
- (id)init;

@end

