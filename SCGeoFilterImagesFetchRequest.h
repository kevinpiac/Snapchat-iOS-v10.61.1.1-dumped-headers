//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCGeoFilterImagesFetchRequest : NSObject
{
    NSArray *_geoFilters;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _completeBlock;
    unsigned long long _state;
}

- (void).cxx_destruct;
- (void)_completeCallbackWithSucceeded:(_Bool)arg1 cancelled:(_Bool)arg2;
- (void)_updateCallbackWithGeoFilterImage:(id)arg1 geoFilterAppearanceSetting:(id)arg2;
- (void)cancel;
- (void)fetchWithFilterContext:(id)arg1 userSession:(id)arg2;
- (id)initWithGeoFilters:(id)arg1 updateBlock:(CDUnknownBlockType)arg2 completeBlock:(CDUnknownBlockType)arg3;

@end

