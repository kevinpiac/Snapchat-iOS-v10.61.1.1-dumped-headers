//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCNContentResolutionContentResolveExtractedParams;

@interface SCNContentResolutionPlatformContentResolveResult : NSObject
{
    NSString *_url;
    SCNContentResolutionContentResolveExtractedParams *_extractedParams;
}

+ (id)PlatformContentResolveResultWithUrl:(id)arg1 extractedParams:(id)arg2;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) SCNContentResolutionContentResolveExtractedParams *extractedParams; // @synthesize extractedParams=_extractedParams;
- (id)initWithUrl:(id)arg1 extractedParams:(id)arg2;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;

@end

