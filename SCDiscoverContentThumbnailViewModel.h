//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMediaContentThumbnailViewModel.h"

#import "SCDiscoverMediaThumbnailViewModel-Protocol.h"

@class SCDiscoverBarContents, SCDiscoverMediaBlobMetadata;

@interface SCDiscoverContentThumbnailViewModel : SCMediaContentThumbnailViewModel <SCDiscoverMediaThumbnailViewModel>
{
    SCDiscoverBarContents *_discoverBarContents;
    SCDiscoverMediaBlobMetadata *_discoverMetadata;
}

+ (id)discoverMetadataFromDictionary:(id)arg1;
+ (id)uniqueNameFromPublisherName:(id)arg1;
- (void).cxx_destruct;
- (id)discoverBarContentsToDisplay;
- (id)discoverMediaBlobMetadata;
@property(retain, nonatomic) SCDiscoverMediaBlobMetadata *discoverMetadata; // @synthesize discoverMetadata=_discoverMetadata;
- (id)initWithMediaContent:(id)arg1 mediaMetadata:(id)arg2 metadataDict:(id)arg3;
- (void)saveDiscoverBarContents:(id)arg1;
- (_Bool)shouldDisplayDiscoverBar;
- (void)unarchiveDiscoverMediaWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

