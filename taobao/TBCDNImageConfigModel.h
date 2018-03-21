//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface TBCDNImageConfigModel : NSObject
{
    _Bool _cutWebpForWebView;
    _Bool _cutWebpForWebViewOn4s;
    _Bool _domainSwitch;
    NSArray *_cdnImageSizes;
    NSArray *_levelModelImageSizes;
    NSArray *_cdn10000Height;
    NSArray *_cdn10000Width;
    NSArray *_xzcdnImageSizes;
    NSArray *_levelModelXZImageSizes;
    NSMutableArray *_modules;
    NSMutableArray *_list;
    double _levelRatio;
    NSMutableArray *_aliCdnDomain;
    NSMutableArray *_fuzzyExcludePath;
    NSMutableArray *_exactExcludeDomain;
    NSArray *_ossCdnDomain;
    NSArray *_ossFuzzyExcludePath;
    NSArray *_ossExactExcludeDomain;
    NSMutableArray *_domainConvertExcludePath;
    NSString *_domainDest;
    NSString *_heicDomainDest;
    NSDictionary *_configDataDict;
}

@property(retain, nonatomic) NSDictionary *configDataDict; // @synthesize configDataDict=_configDataDict;
@property(retain, nonatomic) NSString *heicDomainDest; // @synthesize heicDomainDest=_heicDomainDest;
@property(retain, nonatomic) NSString *domainDest; // @synthesize domainDest=_domainDest;
@property(retain, nonatomic) NSMutableArray *domainConvertExcludePath; // @synthesize domainConvertExcludePath=_domainConvertExcludePath;
@property(nonatomic) _Bool domainSwitch; // @synthesize domainSwitch=_domainSwitch;
@property(retain, nonatomic) NSArray *ossExactExcludeDomain; // @synthesize ossExactExcludeDomain=_ossExactExcludeDomain;
@property(retain, nonatomic) NSArray *ossFuzzyExcludePath; // @synthesize ossFuzzyExcludePath=_ossFuzzyExcludePath;
@property(retain, nonatomic) NSArray *ossCdnDomain; // @synthesize ossCdnDomain=_ossCdnDomain;
@property(retain, nonatomic) NSMutableArray *exactExcludeDomain; // @synthesize exactExcludeDomain=_exactExcludeDomain;
@property(retain, nonatomic) NSMutableArray *fuzzyExcludePath; // @synthesize fuzzyExcludePath=_fuzzyExcludePath;
@property(retain, nonatomic) NSMutableArray *aliCdnDomain; // @synthesize aliCdnDomain=_aliCdnDomain;
@property(nonatomic) double levelRatio; // @synthesize levelRatio=_levelRatio;
@property(retain, nonatomic) NSMutableArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSMutableArray *modules; // @synthesize modules=_modules;
@property(retain, nonatomic) NSArray *levelModelXZImageSizes; // @synthesize levelModelXZImageSizes=_levelModelXZImageSizes;
@property(retain, nonatomic) NSArray *xzcdnImageSizes; // @synthesize xzcdnImageSizes=_xzcdnImageSizes;
@property(retain, nonatomic) NSArray *cdn10000Width; // @synthesize cdn10000Width=_cdn10000Width;
@property(retain, nonatomic) NSArray *cdn10000Height; // @synthesize cdn10000Height=_cdn10000Height;
@property(retain, nonatomic) NSArray *levelModelImageSizes; // @synthesize levelModelImageSizes=_levelModelImageSizes;
@property(retain, nonatomic) NSArray *cdnImageSizes; // @synthesize cdnImageSizes=_cdnImageSizes;
@property(nonatomic) _Bool cutWebpForWebViewOn4s; // @synthesize cutWebpForWebViewOn4s=_cutWebpForWebViewOn4s;
@property(nonatomic) _Bool cutWebpForWebView; // @synthesize cutWebpForWebView=_cutWebpForWebView;
- (void).cxx_destruct;
- (id)getModuleModelForName:(id)arg1;

@end

