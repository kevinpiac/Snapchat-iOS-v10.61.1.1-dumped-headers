//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer;

@interface SCNetworkImageResizeController : NSObject
{
    double _currentWidth;
    double _currentHeight;
    SCQueuePerformer *_performer;
    _Bool _resizeImageAutomatically;
    double _cornerRadius;
    long long _contentMode;
    struct CGSize _preferredImageSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (id)initWithImageProcessingPerformer:(id)arg1;
@property(nonatomic) struct CGSize preferredImageSize; // @synthesize preferredImageSize=_preferredImageSize;
@property(nonatomic) _Bool resizeImageAutomatically; // @synthesize resizeImageAutomatically=_resizeImageAutomatically;
- (id)resizeImageIfNeededWithImage:(id)arg1;
- (void)updateImageViewBounds:(struct CGRect)arg1;

@end

