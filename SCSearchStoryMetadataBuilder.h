//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCSearchDynamicStory;

@interface SCSearchStoryMetadataBuilder : NSObject
{
    long long _viewableStatus;
    NSString *_displayText;
    NSString *_snapId;
    SCSearchDynamicStory *_dynamicStory;
}

+ (id)withSearchStoryMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDisplayText:(id)arg1;
- (id)setDynamicStory:(id)arg1;
- (id)setSnapId:(id)arg1;
- (id)setViewableStatus:(long long)arg1;

@end
