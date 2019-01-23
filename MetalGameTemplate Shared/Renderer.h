//
//  Renderer.h
//  MetalGameTemplate Shared
//
//  Created by Einar Risholm on 23/01/2019.
//  Copyright © 2019 Longship. All rights reserved.
//

#import <MetalKit/MetalKit.h>

// Our platform independent renderer class.   Implements the MTKViewDelegate protocol which
//   allows it to accept per-frame update and drawable resize callbacks.
@interface Renderer : NSObject <MTKViewDelegate>

-(nonnull instancetype)initWithMetalKitView:(nonnull MTKView *)view;

@end

