//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCGalleryExportLogger : NSObject
{
}

+ (id)_contentFromActivityItemProviders:(id)arg1;
+ (unsigned long long)_convertToExportResultWithSuccess:(_Bool)arg1 cancelled:(_Bool)arg2;
+ (unsigned long long)_getNumberOfSnapsFromItems:(id)arg1;
+ (unsigned long long)_getNumberOfStoriesFromItems:(id)arg1;
+ (id)attemptToExportItems:(id)arg1;
+ (void)didCompleteExportWithSessionId:(id)arg1 itemProviders:(id)arg2 success:(_Bool)arg3 errorType:(id)arg4 cancelled:(_Bool)arg5 saveToCameraRoll:(_Bool)arg6;

@end

