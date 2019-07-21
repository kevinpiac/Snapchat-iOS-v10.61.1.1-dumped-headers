//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCDiscoverChunkOperaParser : NSObject
{
}

+ (void)_addErrorPropertiesToProperties:(id)arg1 chunk:(id)arg2;
+ (void)_applySubscribeAndOptInPropertiesToSharePageProperties:(id)arg1 chunk:(id)arg2 userSession:(id)arg3;
+ (id)_chromeDisplaySubtitleForDiscoverChunk:(id)arg1;
+ (id)_loadingPagePropertiesForChunk:(id)arg1 pageProperties:(id)arg2 needsToCreateBottomViewModel:(_Bool)arg3 isInPlaylistMode:(_Bool)arg4;
+ (id)_sharedPagePropertiesForChunk:(id)arg1 section:(id)arg2 userSession:(id)arg3 mediaManager:(id)arg4;
+ (id)accessibilityLabelForChunkLongform:(id)arg1;
+ (id)accessibilityLabelForChunkTopSnap:(id)arg1;
+ (void)addLoadingPropertiesToProperties:(id)arg1 channel:(id)arg2;
+ (id)pagePropertiesForChromeViewWithDiscoverChunk:(id)arg1;
+ (id)pagesPropertiesForChunk:(id)arg1 needsToCreateBottomViewModel:(_Bool)arg2 isInPlaylistMode:(_Bool)arg3 userSession:(id)arg4 mediaManager:(id)arg5 streamingURLProvider:(id)arg6 navigationDelegate:(id)arg7;

@end

