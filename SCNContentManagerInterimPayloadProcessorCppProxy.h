//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNContentManagerInterimPayloadProcessor-Protocol.h"

@interface SCNContentManagerInterimPayloadProcessorCppProxy : NSObject <SCNContentManagerInterimPayloadProcessor>
{
    struct Handle<std::__1::shared_ptr<snap::content_manager::InterimPayloadProcessor>, std::__1::shared_ptr<snap::content_manager::InterimPayloadProcessor>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)decrypt:(id)arg1 readStream:(id)arg2 key:(id)arg3 iv:(id)arg4 shouldUsePaddingOption:(_Bool)arg5;
- (void)decryptWithDataIv:(id)arg1 readStream:(id)arg2 key:(id)arg3 iv:(id)arg4;
- (id)initWithCpp:(const shared_ptr_e30a19a0 *)arg1;
- (void)unzip:(id)arg1 readStream:(id)arg2;

@end
