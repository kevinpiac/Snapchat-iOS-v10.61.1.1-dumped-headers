//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, SCLens;
@protocol SCFeatureShazam;

@protocol SCFeatureShazamDelegate <NSObject>
- (void)featureShazam:(id <SCFeatureShazam>)arg1 didFinishWithResult:(NSObject *)arg2;
- (void)featureShazamDidSubmitSearchRequest:(id <SCFeatureShazam>)arg1;
- (SCLens *)filterLensForFeatureShazam:(id <SCFeatureShazam>)arg1;
@end

