//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCManagedRecordedVideo, SCManagedURL, SCTemporaryDatastore;

@interface SCRecordingFileManager : NSObject
{
    SCTemporaryDatastore *_temporaryDatastore;
    SCManagedURL *_videoURL;
    SCManagedURL *_rawVideoDataURL;
    NSArray *_restoredVideoURLs;
    SCManagedRecordedVideo *_recordedVideo;
}

- (void).cxx_destruct;
- (id)_activeVideoPaths;
- (void)addRecordingURLToActiveVideoPaths;
- (id)generateTempOutputURLAndAddActiveVideoURL;
- (id)initWithTemporaryDatastore:(id)arg1;
@property(retain, nonatomic) SCManagedRecordedVideo *recordedVideo; // @synthesize recordedVideo=_recordedVideo;
- (void)removeActiveRecordingURLOfRecordedVideo;
- (void)restoreActiveVideoURLs;

@end
