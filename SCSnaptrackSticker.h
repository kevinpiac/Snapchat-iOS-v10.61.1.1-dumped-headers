//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStickerProtocol-Protocol.h"

@class NSString, SCSnaptrackStickerView;
@protocol SCSnaptrack;

@interface SCSnaptrackSticker : NSObject <SCStickerProtocol>
{
    id <SCSnaptrack> _snaptrack;
    SCSnaptrackStickerView *_snaptrackStickerView;
}

+ (id)snaptrackStickerWithSnaptrack:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)imageWithUserSession:(id)arg1 contexts:(id)arg2 isDecoded:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)loggingParameters;
- (id)packId;
- (id)shortLoggingName;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) id <SCSnaptrack> snaptrack; // @synthesize snaptrack=_snaptrack;
@property(readonly, nonatomic) SCSnaptrackStickerView *snaptrackStickerView; // @synthesize snaptrackStickerView=_snaptrackStickerView;
- (id)stickerId;
- (id)stickerStateWithRelativeSize:(struct CGSize)arg1 center:(struct CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 isTracking:(_Bool)arg5 trackingTrajectory:(id)arg6;
- (id)thumbnailImageWithUserSession:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)toSOJUSticker;
- (unsigned long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

