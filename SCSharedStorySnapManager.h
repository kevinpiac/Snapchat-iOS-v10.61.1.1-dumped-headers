//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSharedStorySnapManager : NSObject
{
}

+ (id)shared;
- (void)fetchMapMediaForStoryId:(id)arg1 metadataDownloadCompletion:(CDUnknownBlockType)arg2 storyDownloadCompletion:(CDUnknownBlockType)arg3 withRequestContexts:(id)arg4;
- (void)fetchMapPoiSharePlaylistForPoiId:(id)arg1 completion:(CDUnknownBlockType)arg2 withRequestContexts:(id)arg3;
- (void)fetchMediaForStoryId:(id)arg1 senderUsername:(id)arg2 sequenceNumber:(id)arg3 conversationId:(id)arg4 userInitiated:(_Bool)arg5 metadataDownloadCompletion:(CDUnknownBlockType)arg6 storyDownloadCompletion:(CDUnknownBlockType)arg7 thumbnailDownloadCompletion:(CDUnknownBlockType)arg8 withRequestContexts:(id)arg9;
- (void)fetchSearchMediaForDynamicStoryId:(id)arg1 snapId:(id)arg2 metadataDownloadCompletion:(CDUnknownBlockType)arg3 storyDownloadCompletion:(CDUnknownBlockType)arg4 withRequestContexts:(id)arg5 experimentManager:(id)arg6 requestManager:(id)arg7 snapTokenManager:(id)arg8;
- (id)init;

@end

