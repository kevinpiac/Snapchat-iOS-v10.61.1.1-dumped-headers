//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnifiedColorFilterRequestCommandMapping-Protocol.h"

@protocol SCUnifiedCameraObjectCommandMapping, SCUnifiedColorFilterRequestCommandMapping;

@interface SCUnifiedColorFilterRequestCommandMapper : NSObject <SCUnifiedColorFilterRequestCommandMapping>
{
    id <SCUnifiedColorFilterRequestCommandMapping> _defaultMapper;
    id <SCUnifiedCameraObjectCommandMapping> _ucoMapper;
    _Bool _isVideo;
}

- (void).cxx_destruct;
- (_Bool)_isCommandContainerUCOCompatible:(id)arg1;
- (_Bool)_isCommandUcoConvertible:(id)arg1;
- (id)_ucoMappedCommandsFromCommandContainer:(id)arg1;
- (id)initWithDefaultMapper:(id)arg1 ucoMapper:(id)arg2 isVideo:(_Bool)arg3;
- (id)mappedCommandsFromCommandContainer:(id)arg1;

@end

