//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCLensResource;

@interface SCLensStoredResourceBuilder : NSObject
{
    NSString *_contentId;
    NSString *_contentPath;
    SCLensResource *_lensResource;
}

+ (id)withLensStoredResource:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setContentId:(id)arg1;
- (id)setContentPath:(id)arg1;
- (id)setLensResource:(id)arg1;

@end

